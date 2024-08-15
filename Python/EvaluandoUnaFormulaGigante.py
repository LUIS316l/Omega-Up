import math

x, y, z = map(float, input().split())

operacion = (((2 * x + y) / z) * (math.pow(y, 3) - z)) / ((x + 2 * y + 3 * z) / (z - 2 * y - 3 * x) + math.pow(x, 2) + math.pow(z, 2))

print(operacion)

# https://omegaup.com/arena/problem/Evaluando-una-formula-gigante/