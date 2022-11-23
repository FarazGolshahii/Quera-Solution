package keyboard

type Keyboard struct {
    dure int
    hist map[byte]int
}

func NewKeyboard(dure int) *Keyboard {
    return &Keyboard{
        dure: dure,
        hist: make(map[byte]int),
    }
}

func (keyboard *Keyboard) Enter(inp string) string {
    res := ""
    for _, charI := range inp {
        if charI>127{
            panic("invalid char")
        }
        char := byte(charI)
        res += keyboard.enterChar(char)
    }
    return res
}

func (keyboard *Keyboard) enterChar(char byte) string{
    ans := ""
    lower:=char
    if char >=65 && char <=90 {
        lower+=32
    }

    if lower==char {
        if keyboard.isOk(lower) {
            ans += string(char)
        }
    } else {
        if keyboard.isOk(0) && keyboard.isOk(lower){
            ans += string(char)
        } else if !keyboard.isOk(0) && keyboard.isOk(lower) {
            ans += string(lower)
        }
        keyboard.hist[0]++
        keyboard.hist[lower]++
    }
    return ans
}

func (keyboard *Keyboard) isOk(char byte) bool{
    if  char >=65 && char <=90 {
        panic("isOk only accepts lowercase")
    }
    return keyboard.hist[char] < keyboard.dure
}