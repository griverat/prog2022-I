# -*- coding: utf-8 -*-
"""
Created on Tue Jun 28 17:23:40 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER num

SI num >= 10 Y num <=99:
    digi1 = num // 10
    digi2 = num % 10

    if digi1 == 1 or digi1 == 2 or digi1 == 3 or digi1 == 5 or digi1 == 7
        ESCRIBIR "El primer digito es primo"
    SINO:
        ESCRIBIR "El primer digito no es primo"
    if digi2 == 1 or digi2 == 2 or digi2 == 3 or digi2 == 5 or digi2 == 7
        ESCRIBIR "El segundo digito es primo"
    SINO:
        ESCRIBIR "El segundo digito no es primo"
SINO:
    ESCRIBIR "Ingrese un numero de dos cifras"
"""

num = eval(input("Ingrese un numero: "))

if num >= 10 and num <= 99:
    digi1 = num // 10
    digi2 = num % 10

    if digi1 == 1 or digi1 == 2 or digi1 == 3 or digi1 == 5 or digi1 == 7:
        print("El primer digito es primo")
    else:
        print("El primer digito no es primo")
    if digi2 == 1 or digi2 == 2 or digi2 == 3 or digi2 == 5 or digi2 == 7:
        print("El segundo digito es primo")
    else:
        print("El segundo digito no es primo")
else:
    print("Ingrese un numero de dos cifras")
