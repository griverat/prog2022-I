# -*- coding: utf-8 -*-
"""
Created on Wed Jul 20 16:08:38 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

num = eval(input("Ingrese un numero entero: "))

if num % 1 != 0:
    print("El numero ingresado no es entero")
    exit()

print(num, end=" ")
while num != 1:
    if num % 2 == 0:
        num //= 2
    else:
        num = 3 * num + 1
    print(num, end=" ")
print()
