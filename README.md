# Práctica 2: Guardar los números pares
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 5 números enteros

**Salidas:**
1. Cantidad de números pares encontrados
2. Los números pares guardados en el arreglo

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- El programa debe pedir exactamente 5 números enteros
- Solo se deben guardar los números que sean pares

**Tamaño del arreglo y por qué** (piensa en el peor caso):
El arreglo debe tener un tamaño de 5 porque en el peor caso los 5 números introducidos podrían ser pares

**¿El 0 y los negativos son pares? ¿Por qué?**
Sí. El 0 es par porque al dividirlo entre 2 el residuo es 0. Los números negativos también pueden ser pares; por ejemplo, -4 es par porque -4 % 2 es igual a 0

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
Después de cada vuelta, totalPares representa la cantidad de números pares que se han encontrado y también indica la siguiente posición libre del arreglo

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | 8, 2 | 8 → pares[0], 2 → pares[1] |
| 2 | 2, 4, 7, 9, 11 | 2, 4 | 2 → pares[0], 4 → pares[1] |
| 3 | 1, 6, 3, 10, 5 | 6, 10 | 6 → pares[0], 10 → pares[1] |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí / No
**¿Tuve que corregirla?** No, después de probarla a mano funcionó correctamente.

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
Guardar los numeros pares de 5 numeros Escribe un numero: 3 Escribe un numero: 8 Escribe un numero: 5 Escribe un numero: 2 Escribe un numero: 7 Pares encontrados: 2 8 2
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
Al imprimir las 5 posiciones aparecieron los pares guardados y también valores en las posiciones que no habían sido utilizadas. Esto ocurre porque esas posiciones del arreglo no recibieron ningún valor.

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
Los pares se guardaron en posiciones incorrectas porque la variable del ciclo indica qué número de entrada estamos procesando, mientras que totalPares indica cuál es la siguiente posición libre para guardar un par.

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | 2 pares: 2, 4 | Sí |
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | 2 pares: 8, 2 | Sí |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | 5 pares: 2, 4, 6, 8, 10 | Sí |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | 0 pares | Sí |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 | 2 pares: 0, -4 | Sí |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir |  | |
| Caso propio 1 | -2, 5, 8, 11, 14 | 3 pares: -2, 8, 14 | 3 pares: -2, 8, 14 | Sí |
| Caso propio 2 | 100, 101, 102, 103, 104 | 3 pares: 100, 102, 104 | 3 pares: 100, 102, 104 | Sí |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | Al principio faltaba la parte para guardar los pares en el arreglo. | Agregué pares[totalPares] = numero. | Sí |
| 2 | Se podían mostrar posiciones del arreglo que no tenían datos. | Cambié el recorrido para usar i < totalPares. | Sí |

**Reto elegido (opcional):** No elegí ningún reto opcional.

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ¿Por qué totalPares sirve para saber cuál es la siguiente posición libre del arreglo? | Probé con varios números y observé cómo aumenta cada vez que encuentro un par. |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Aprendí a declarar y utilizar arreglos, a guardar datos dependiendo de una condición y a utilizar un contador para saber cuántos elementos tiene realmente el arreglo.

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Intentaría hacer primero la receta y las pruebas a mano con más cuidado para encontrar los errores antes de comenzar a programar.

**¿Qué fue lo más difícil y cómo lo resolví?**
Lo más difícil fue entender la diferencia entre la variable del ciclo y totalPares. Lo resolví haciendo pruebas con diferentes números y observando en qué posición se guardaba cada par.

**¿Qué pregunta me quedó sin responder?**
Me quedó la duda de qué otras formas existen para recorrer un arreglo y cuáles son más convenientes dependiendo del problema.

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
Porque la variable del ciclo indica qué número de entrada estoy procesando, mientras que totalPares indica cuántos pares se han encontrado y cuál es la siguiente posición disponible del arreglo.

## 13. Lista de verificación antes de entregar (Fase 5)

- [ x] Llené todas las secciones (no quedan `_____`)
- [ x] Mi programa compila sin advertencias
- [ x] Probé todos los casos de la tabla
- [ x] Hice los Experimentos A y B y dejé el código correcto al terminar
- [x ] No modifiqué `utilerias.h`
- [ x] Hice al menos 3 commits con mensajes claros
- [ x] Hice `git push` y verifiqué mi fork en GitHub
- [ x] Entregué el enlace de mi fork en Classroom