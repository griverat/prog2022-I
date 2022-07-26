# -*- coding: utf-8 -*-
"""
Created on Wed Jul 20 15:19:33 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

num = eval(
    input("Ingrese la cantidad de terminos a imprimir de la sucesion de Fibonacci: ")
)

prev = 0
curr = 1
for i in range(num):
    print(prev, end=" ")
    prev, curr = curr, prev + curr
print()