# Comprasion

Необходимо написать программу, которая принимает две последовательности неотрицательных чисел и сравнивает их содержимое. Обе последовательности содержат как минимум одно число. В отдельном файле необходимо написать функцию с именем greater_than_or_equal, которая принимает два числа или две последовательности чисел, и возвращает значение true, если первое число/последовательность чисел больше или равно второму числу/последовательности чисел, и false в ином случае. Сравнение последовательностей происходит по их средним геометрическим значениям. Алгоритм нахождения средних геометрических значений должен быть оформлен в виде функции и в другом отдельном файле.
Общий ход работы программы будет выглядеть в следующем виде: ввод данных и два последующих вызова функции сравнения greater_than_or_equal, сначала для первых чисел из каждой последовательности, а затем для обеих последовательностей целиком.

Алгоритмы в каждой функции должны быть реализованы явно, без применения целевых готовых решений.
Формат вывода результата, а также сообщений перед вводом и выводом результата указан в примере и обязателен к соблюдению.

Пример работы программы:

Enter A size: 3

A1) 1

A2) 221

A3) 34.3

Enter B size: 5

B1) 20

B2) 31

B3) 634.4

B4) 454.5

B5) 0

- Result -

A[0] < B[0]

GM(A) >= GM(B)
