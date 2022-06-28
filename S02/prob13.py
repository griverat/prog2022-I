# -*- coding: utf-8 -*-
"""
Created on Tue Jun 28 16:23:50 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon

LEER num1
LEER num2
LEER num3

SI num1 == num2 y num2 == num3:
    ESCRIBIR "Los numeros son iguales"
SINO SI num1 == num2 O num1 == num3 O num2 == num3:
    SI  num1 = num2:
        prod = num1 * num3
    SINO SI num2 = num3:
        prod = num1 * num2
    SINO SI num1 = num3:
        prod = num1 * num2
    ESCRIBIR "El producto del numero igual con el diferente es" prod
SINO SI num1 > num2 y num1 > num3:
        mayor = num1
        SI num2 > num3:
            medio = num2
            menor = num3
        SINO:
            medio = num3
            menor = num2
    SINO SI num2 > num1 y num2 > num3:
        mayor = num2
        SI num1 > num3:
            medio = num1
            menor = num3
        SINO:
            medio = num3
            menor = num1
    SINO:
        mayor = num3
        SI num1 > num2:
            medio = num1
            menor = num2
        SINO:
            medio = num2
            menor = num1
    ESCRIBIR "La diferencia entre el mayor y el menor es: " mayor - menor
    ESCRIBIR "La diferencia entre el medio y el menor es: " medio - menor

"""

first_num = eval(input("Ingrese el primer numero: "))
second_num = eval(input("Ingrese el segundo numero: "))
third_num = eval(input("Ingrese el tercer numero: "))

if first_num == second_num and second_num == third_num:
    print("Los numeros son iguales")
elif first_num == second_num or first_num == third_num or second_num == third_num:
    if first_num == second_num:
        prod = first_num * third_num
    elif second_num == third_num:
        prod = first_num * second_num
    elif first_num == third_num:
        prod = first_num * second_num
    print(f"El producto del numero igual con el diferente es: {prod}")
else:
    if first_num > second_num and first_num > third_num:
        mayor = first_num
        if second_num > third_num:
            medio = second_num
            menor = third_num
        else:
            medio = third_num
            menor = second_num
    elif second_num > first_num and second_num > third_num:
        mayor = second_num
        if first_num > third_num:
            medio = first_num
            menor = third_num
        else:
            medio = third_num
            menor = first_num
    else:
        mayor = third_num
        if first_num > second_num:
            medio = first_num
            menor = second_num
        else:
            medio = second_num
            menor = first_num
    print(f"La diferencia entre el mayor y el menor es: {mayor - menor}")
    print(f"La diferencia entre el medio y el menor es: {medio - menor}")
