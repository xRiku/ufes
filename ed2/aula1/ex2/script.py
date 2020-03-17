#!/usr/bin/env python3

import subprocess

i = 3
while i < 9:
    y = 10**i
    aux = subprocess.run(['./test', f'{y}', '10'], stdout=subprocess.PIPE)
    print(int(aux.stdout))
    i+=1
