// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

import java.util.Scanner;

public class Main {

public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // First String To run in programm
        String firstString = "1";
        String lastString = "1";

        // Give Input
        String input = sc.nextLine();
        String[] tempInput = input.split(" ");
        int L = Integer.parseInt(tempInput[0]);
        int R = Integer.parseInt(tempInput[1]);

        String temp;

        for (int i = 0; firstString.length() <= R + 1; i++) {

            if(i == 0) {
                firstString = "10";
                lastString = "01";
            }

            temp = lastString + firstString;
            firstString += lastString;
            lastString = temp;

        }

        System.out.println(firstString.substring(L - 1,R));

    }

}