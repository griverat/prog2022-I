# -*- coding: utf-8 -*-
"""
Created on Tue Jun 21 17:28:48 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

-----------------
## PSEUDO-CODE ##
-----------------

LEER num1

SI num1 % 1 == 0 Y num1 >= 1 Y num1 <= 10:
    SI num1 == 1 O num1 == 2 O num1 == 3 O num1 ==5 O num1 == 7 O num1 == 9:
        ESCRIBIR "El numero es primo"
    SINO:
        ESCRIBIR "El numero no es primo"
SINO:
    ESCRIBIR "El numero no es entero o esta fuera de rango"

"""

input_num = eval(input("Ingrese un numero entero del 1 al 10: "))

if input_num % 1 == 0 and input_num >= 1 and input_num <= 10:
    if (
        input_num == 1
        or input_num == 2
        or input_num == 3
        or input_num == 5
        or input_num == 7
    ):
        print(f"El numero {input_num} es primo")
    else:
        print("El numero ingresado no es primo")
else:
    print("El numero ingresado no es entero o no esta entre 1 y 10")
