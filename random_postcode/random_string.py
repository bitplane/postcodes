#!/usr/bin/env python2

import string
import random

possibles = string.ascii_uppercase + string.digits

while True:
    r = random.randint(2,4)
    print ''.join(random.choice(possibles) for i in range(r)),
    print ''.join(random.choice(possibles) for i in range(3))
