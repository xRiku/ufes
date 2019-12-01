import numpy as np

y = np.array([3,5,6,8,16])
u = np.array([6,7,8,9,10])
i = 0

while i < len(u):
    print((y - u[i])**2)
    w = (y - u[i])**2
    print(w.sum())
    i+=1