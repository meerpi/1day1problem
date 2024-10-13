package day30;

import java.util.Scanner;
public class prob
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        s.nextLine();
        int k = 0;
        int m = 0;
        for (int i = 0; i < n ; i++)
        {
            String cando = s.nextLine();
            String[] snumber = cando.split(" ");
            int[] number = new int[snumber.length];
            for (int j = 0 ; j < snumber.length; j++)
            {
                number[j] = Integer.parseInt(snumber[j]);
                if (number[j] == 1) {
                    k++;
                }
            }
            if (k >= 2)
            {
                m++;
                k = 0;
            }
            else
            {
                k = 0;
            }

        }
        System.out.print(m);
    }
}