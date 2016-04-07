package com.asahi.test;

import java.util.Scanner;

public class ChessBorad {
	public static int k1, k2, k3, k4;

	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		int m = read.nextInt();
		for (int i = 0; i < m; i++) {
			int n = read.nextInt();
			n = (int) Math.pow(2, n);
			int x, y;
			x = read.nextInt();
			y = read.nextInt();
			k1 = k2 = k3 = k4 = 0;
			calc(1, n, 1, n, x, y);
			System.out.println(k1 + " " + k2 + " " + k3 + " " + k4);
		}
	}

	public static void calc(int rowStart, int rowEnd, int colStart, int colEnd,
			int x, int y) {
		if (rowStart == rowEnd)
			return;
		int rowMid = (rowStart + rowEnd) >> 1;
		int colMid = (colStart + colEnd) >> 1;
		if (x <= colMid) {
			if (y <= rowMid) {
				k1++;
				calc(rowStart,rowMid,colStart,colMid,x,y);
				calc(rowStart,rowMid,colMid+1,colEnd,colMid+1,rowMid);
				calc(rowMid+1,rowEnd,colStart,colMid,colMid,rowMid+1);
				calc(rowMid+1,rowEnd,colMid+1,colEnd,colMid+1,rowMid+1);
				
			} else {
				k2++;
				calc(rowStart,rowMid,colStart,colMid,colMid,rowMid);
				calc(rowStart,rowMid,colMid+1,colEnd,x,y);
				calc(rowMid+1,rowEnd,colStart,colMid,colMid,rowMid+1);
				calc(rowMid+1,rowEnd,colMid+1,colEnd,colMid+1,rowMid+1);

			}
		}
		else {
			if(y <= rowMid){
				k3++;
				calc(rowStart,rowMid,colStart,colMid,colMid,rowMid);
				calc(rowStart,rowMid,colMid+1,colEnd,colMid+1,rowMid);
				calc(rowMid+1,rowEnd,colStart,colMid,x,y);
				calc(rowMid+1,rowEnd,colMid+1,colEnd,colMid+1,rowMid+1);
			}
			else {
				k4++;
				calc(rowStart,rowMid,colStart,colMid,colMid,rowMid);
				calc(rowStart,rowMid,colMid+1,colEnd,colMid+1,rowMid);
				calc(rowMid+1,rowEnd,colStart,colMid,colMid,rowMid+1);
				calc(rowMid+1,rowEnd,colMid+1,colEnd,x,y);
			}
		}
	}
}