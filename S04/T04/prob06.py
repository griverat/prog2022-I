# -*- coding: utf-8 -*-
"""
Created on Wed Jul 20 15:19:42 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

num = eval(input("Ingrese un numero menor a 200: "))

if num >= 200:
    print("El numero ingresado es mayor o igual a 200")
else:
    prime = True
    for i in range(2, (num//2)+1):
        if num % i == 0:
            prime = False
            break
    if prime and num != 0 and num != 1:
        print(f"✅ El numero {num} es primo")
    else:
        print(f"❌ El numero {num} no es primo")
