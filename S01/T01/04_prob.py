# -*- coding: utf-8 -*-
"""
Created on Tue Jun 21 17:26:03 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER num1
LEER num2

SI num1 > num2
    ESCRIBIR "El numero 1 es mayor"
SINO SI num2 > num1
    ESCRIBIR "El numero 2 es mayor"
SINO
    ESCRIBIR "Los numeros son iguales"

"""

first_num = eval(input("Ingrese el primer numero: "))
second_num = eval(input("Ingrese el segundo numero: "))

if first_num > second_num:
    print(f"El primer numero es el mayor: {first_num}")
elif second_num > first_num:
    print(f"El segundo numero es el mayor: {second_num}")
else:
    print("Los numeros son iguales")
