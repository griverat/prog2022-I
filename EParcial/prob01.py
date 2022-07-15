# -*- coding: utf-8 -*-
"""
Created on Tue Jul 12 15:10:55 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

num = eval(input("Ingrese un numero para determinar si es capicua: "))

if num >= 100 and num <= 99999:
    # El numero tendra como minimo 3 digitos, asi que
    # las tres primeras extracciones de digitos seran
    # existosas, donde el numero tendra la siguiente
    # forma (...cba)

    # Necesitamos un contador de cifras
    ncifras = 3
    _num = num

    a = _num % 10
    _num = _num // 10
    b = _num % 10
    _num = _num // 10
    c = _num % 10
    _num = _num // 10

    # Si la division entera da como residuo 0, entonces
    # el numero se quedo sin digitos
    if _num != 0:
        d = _num % 10
        ncifras += 1
        _num = _num // 10
        if _num != 0:
            e = _num % 10
            ncifras += 1

    # Armamos un solo condicional con toda la logica
    # que cumplira un capicua
    if (
        (ncifras == 3 and a == c)
        or (ncifras == 4 and a == d and b == c)
        or (ncifras == 5 and a == e and b == d)
    ):
        print(f"✅ El numero {num} es capicua ✅")
    else:
        print(f"❌ El numero {num} no es capicua ❌")
