# -*- coding: utf-8 -*-
"""
Created on Tue Jul 12 15:32:10 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

lado1 = eval(input("Ingrese el lado 1 del triangulo: "))
lado2 = eval(input("Ingrese el lado 2 del triangulo: "))
lado3 = eval(input("Ingrese el lado 3 del triangulo: "))

cond = None

if lado1 < 0 or lado2 < 0 or lado3 < 0:
    print("❌ Los lados deben ser mayores a 0 ❌")
elif (
    (lado1 + lado2 > lado3 and lado3 > abs(lado1 - lado2))
    and (lado1 + lado3 > lado2 and lado2 > abs(lado1 - lado3))
    and (lado2 + lado3 > lado1 and lado1 > abs(lado2 - lado3))
):
    print("✅ El triangulo existe ✅")

    if lado1 == lado2 and lado2 == lado3:
        cond = "equi"
    elif lado1 == lado2 or lado1 == lado3 or lado2 == lado3:
        cond = "isos"
    else:
        cond = "esca"
else:
    print("❌ El triangulo no existe ❌")


# Correr en python 3.10 como minimo
match cond:
    case "equi":
        print("El triangulo es equilatero")
        print(f"El area es {(lado1)*(lado1)*(3**0.5) / 4:2.3f} u^2")
    case "isos":
        print("El triangulo es isosceles")
        print(f"El perimetro es {lado1 + lado2 + lado3}")
    case "esca":
        print("El triangulo es escaleno")
