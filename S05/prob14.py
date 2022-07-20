# -*- coding: utf-8 -*-
"""
Created on Wed Jul 20 15:58:09 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

while (num := eval(input("Ingrese un numero positivo: "))) < 0:
    continue

while (n := num) != 0:
    for i in range(1, n + 1):
        print(i, end=" ")
    print()
    num -= 1
