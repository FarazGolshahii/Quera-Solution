def Input():
    lines = []
    while True:
        try:
            lines.append(input().strip())
        except EOFError:
            break
    return lines

def Output(lines):
    for line in lines:
        print("".join(line))

def blocks(lines):
    numberOfBlocks = 0
    
    for index in range(len(lines)):
        line = lines[index]
        lines[index] = ["\t" * numberOfBlocks] + line
        
        if line[-1] == "{":
            if "else" in line:
                lines[index] = ["\t" * (numberOfBlocks-1)] + line
            else:
                numberOfBlocks += 1
        
        elif line[-1] == "}":
            numberOfBlocks -= 1
            lines[index] = ["\t" * numberOfBlocks] + line

def split(lines):
    splitted = []
    spaces = []
    types = []
    
    puncs = {"=": ["==", "<=", ">=", "<<=", ">>=", "!=", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^="],
             ">": ["=>" ,">>", "<=>", "->", "<>"],
             "<": ["=<" ,"<<"],
             "&": ["&&"],
             "|": ["||"],
             "+": ["++"],
             "-": ["--"]}
    
    for line in lines:
        
        if line == "":
            continue
        
        spl = []
        types.append([])
        spaces.append([])
        mode = "" # space # punc # number # string_1 # string_2 # name
        length = len(line)
        
        if line.startswith("#") or line.startswith("//"):
            splitted += [[line]]
            continue
        
        for index in range(length):
            letter = line[index]
            
            if mode == "string 1":
                spl[-1] += letter
                if letter == '"' and line[index-1] != "\\":
                    mode = ""
            
            elif mode == "string 2":
                spl[-1] += letter
                if letter == "'" and line[index-1] != "\\":
                    mode == ""
            
            elif letter == '"':
                spl.append('"')
                types[-1] += ["string 1"]
                mode = "string 1"
            
            elif letter == "'":
                spl.append("'")
                types[-1] += ["string 2"]
                mode = "string 2"
            
            elif letter in [" ", "\t"]:
                lenOfSpl = len(spl)
                if spaces[-1] != lenOfSpl:
                    spaces[-1].append(lenOfSpl)
                mode = "space"
            
            elif "a" <= letter <= "z" or "A" <= letter <= "Z" or letter == "_":
                if mode != "name":
                    types[-1] += ["name"]
                    spl.append("")
                spl[-1] += letter
                mode = "name"
            
            elif "0" <= letter <= "9":
                if mode == "name":
                    spl[-1] += letter
                else:
                    if mode != "number":
                        types[-1] += ["number"]
                        spl.append("")
                    spl[-1] += letter
                    mode = "number"
            
            elif letter in list("{}[]():;,~.?"):
                types[-1] += ["punc"]
                spl.append(letter)
                mode = ""
            
            else:
                if mode != "punc":
                    types[-1] += ["punc"]
                    spl.append("")
                    
                elif letter in puncs:
                    if spl[-1] + letter not in puncs[letter]:
                        types[-1] += ["punc"]
                        spl.append("")
                
                elif spl[-1] != "":
                    types[-1] += ["punc"]
                    spl.append("")
                    
                spl[-1] += letter
                mode = "punc"
        
        splitted.append(spl)
        
    return splitted, spaces, types

def spaces(splt, spac, typ):
    spsadd = []
    
    oper_2 = ["->", "<>", "<=>", "/", "=", "%", ">", "<", "|", "^", "==", "<=", ">=", "!=", ">>=", "<<=", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "=>", "=<", "&&", "||", ">>", "<<", "?", ":"]
    oper_1 = ["++", "--", "!", "~", "."]
    oper_j = ["+", "-", "&", "*"]
    keywords = ["char", "int", "float", "double", "long", "void", "return"]
    
    for jndex in range(len(splt)):
        
        temp = []
        line = splt[jndex]
        ilen = len(line)
        pre = ":)"
        
        if ilen == 1 and (line[0].startswith("#") or line[0].startswith("//")):
            spsadd += [line]
            continue
        
        for index in range(ilen):
            part = line[index]
            
            if index in spac[jndex]:
                
                if part == "(" and pre in ["while", "for", "if"]:
                    pass
                elif part in ["}", "]", ")", "{"] or pre in ["{", "[", "(", "}"]:
                    pass
                elif part in [";", ","] or pre in [";", ","]:
                    pass
                elif part in oper_2 or pre in oper_2:
                    pass
                elif part in oper_1 or pre in oper_1:
                    pass
                elif part in oper_j or pre in oper_j:
                    pass
                
                elif temp != [] and temp[-1] != " ":
                    temp += [" "]
                
            if part == ";":
                temp += [";"]
                if index > 0 and index != ilen-1 and line[-1] != "}":
                    temp += [" "]
                    
            elif part == ",":
                temp += [part, " "]
            
            elif part in oper_2:
                if temp != [] and temp[-1] != " ":
                    temp += [" "]
                temp += [part, " "]
                
            elif part in oper_1:
                temp += [part]
                
            elif part in oper_j:
                if pre != ":)" and typ[jndex][index-1] == "name" and pre in keywords:
                    temp += [" ", part]
                
                elif pre != ":)" and index > 0 and (typ[jndex][index-1] in ["number", "name"] or pre in ["]", ")", "++", "--"]):
                    if temp == [] or temp[-1] != " ":
                        temp += [" "]
                    temp += [part, " "]
                
                else:
                    temp += [part]
                
            else:
                temp += [part]
                
            pre = part
            
        spsadd.append(temp)
        
    return spsadd

def left_brace(lines):
    newlines = []
    for index in range(len(lines)):
        line = lines[index]
        
        if line == ["{"]:
            newlines[-1] += ["{"]
            
        elif line[0] == "{":
            newlines[-1] += ["{"]
            newlines += [line[1:]]
        
        else:
            newlines += [line]
            
    return newlines

def right_brace(lines):
    newlines = []
    for index in range(len(lines)):
        line = lines[index]
        lenOfLine = len(line)
        
        if lenOfLine > 1 and line[-1] == "}":
            numberOfBrace = 0
            for i in range(lenOfLine-1, -1, -1):
                if line[i] != "}":
                    break
                numberOfBrace += 1
                
            if numberOfBrace != lenOfLine:
                newlines += [line[:(-1)*numberOfBrace]]
            newlines += [["}"] for _ in range(numberOfBrace)]
            
        elif lenOfLine > 1 and line[0] == "}":
            numberOfBrace = 0
            for i in range(lenOfLine):
                if line[i] != "}":
                    break
                numberOfBrace += 1
            
            newlines += [["}"] for _ in range(numberOfBrace)]
            if numberOfBrace != lenOfLine:
                newlines += [line[numberOfBrace:]]
        
        else:
            newlines += [line]
            
    return newlines

def else_if(lines):
    newlines = []
    for index in range(len(lines)):
        line = lines[index]
        
        if index > 0 and "else" in line and lines[index-1] == ["}"]:
            newlines[-1] += line
            
        else:
            newlines += [line]
            
    return newlines

code = Input()
splt, spac, typ = split(code)
spsadd = spaces(splt, spac, typ)
spsadd = right_brace(left_brace(spsadd))
spsadd = else_if(spsadd)
blocks(spsadd)
Output(spsadd)