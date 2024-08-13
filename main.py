import math
import time

# Calculate Pi using the Leibniz formula
pi = 0.0
divisor = 1.0
iterations = 5000000
t1 = time.time()

for i in range(1, iterations+1):
    pi = pi + 4.0/divisor - 4.0/(divisor+2.0)
    print(f"Pi approximation after {i} iterations ({round(i/iterations*100, 3)}%): {pi}")
    divisor += 4.0
t2 = time.time()
    
print(f"Final Pi approximation: {pi} / {math.pi}  |  Difference: {abs(math.pi - pi)}")
print(f"Time taken: {t2 - t1}s")