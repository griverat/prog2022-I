# -*- coding: utf-8 -*-
"""
Created on Tue Jul 12 15:56:42 2022

@author: Gerardo A. Rivera Tello
@handle: DangoMelon
"""

cola = eval(input("Ingrese la venta del producto Cola: "))
precio_cola = eval(input("Ingrese el precio del producto Cola: "))

naranja = eval(input("\nIngrese la venta del producto Naranja: "))
precio_naranja = eval(input("Ingrese el precio del producto Naranja: "))

limon = eval(input("\nIngrese la venta del producto Limon: "))
precio_limon = eval(input("Ingrese el precio del producto Limon: "))

MAX_AMNT = 5000000
if cola > MAX_AMNT or naranja > MAX_AMNT or limon > MAX_AMNT:
    print(f"❌ Las ventas no pueden ser mayores a {MAX_AMNT} ❌")
elif cola % 1 != 0 or naranja % 1 != 0 or limon % 1 != 0:
    print("❌ Las ventas no pueden tener decimales ❌")
elif cola < 0 or naranja < 0 or limon < 0:
    print("❌ Las ventas no pueden ser negativas ❌")
elif precio_cola < 0 or precio_naranja < 0 or precio_limon < 0:
    print("❌ Los precios no pueden ser negativos ❌")
else:
    total_cola = cola * precio_cola
    total_naranja = naranja * precio_naranja
    total_limon = limon * precio_limon

    print(f"\n\n{'Producto':<10s}{'Ventas':>10s}{'Precio':>10s}{'Total':>15s}")
    print("-" * 45)
    print(f"{'🧉 Cola':<10s}{cola:>10d}{precio_cola:>10.2f}{total_cola:>15.2f}")
    print(
        f"{'🍊 Naranja':<10s}{naranja:>10d}{precio_naranja:>10.2f}{total_naranja:>15.2f}"
    )
    print(f"{'🍋 Limon':<10s}{limon:>10d}{precio_limon:>10.2f}{total_limon:>15.2f}")
    print(f"{'📈 TOTAL':>30s}{total_cola + total_naranja + total_limon:>15.2f}")
