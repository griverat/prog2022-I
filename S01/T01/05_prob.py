# -*- coding: utf-8 -*-
"""
Created on Tue Jun 21 17:28:38 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER num1
LEER num2
LEER num3

SI num1 >= num2 y num1 >= num3:
    ESCRIBIR "El numero 1 es mayor"
SINO SI num2 >= num1 y num2 >= num3:
    ESCRIBIR "El numero 2 es mayor"
SINO:
    ESCRIBIR "El numero 3 es mayor"

"""

first_num = eval(input("Ingrese el primer numero: "))
second_num = eval(input("Ingrese el segundo numero: "))
third_num = eval(input("Ingrese el tercer numero: "))

if first_num >= second_num and first_num >= third_num:
    print(f"El primer numero es el mayor: {first_num}")
elif second_num >= first_num and second_num >= third_num:
    print(f"El segundo numero es el mayor: {second_num}")
else:
    print(f"El tercer numero es el mayor: {third_num}")
