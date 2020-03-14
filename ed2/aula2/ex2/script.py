#!/usr/bin/env python3

import os
import numpy as np
import subprocess

x = np.array([], dtype = 'int')
i = 0
while i < 10:
    aux = subprocess.run(['./test', '1000000'], stdout=subprocess.PIPE)
    x = np.append(x,int(aux.stdout))
    i+=1

print(x)
print(f'Standard Deviant: {x.std()}')
print(f'Mean: {x.mean()}')