# -*- coding: utf-8 -*-
"""
Created on Wed Jul 20 15:20:54 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

while (num := eval(input("Ingrese un numero: "))) < 0:
    continue

fact = 1

for i in range(1, num + 1):
    fact *= i

print(f"El factorial de {num} es: {fact}")
