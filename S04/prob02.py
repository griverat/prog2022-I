# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 15:37:21 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

n = eval(input("Ingrese un numero entero positivo o cero: "))

if n % 1 != 0:
    print("El numero ingresado no es entero")
elif n < 0:
    print("El numero ingresado no es positivo")

for i in range(n + 1):
    print(i)
