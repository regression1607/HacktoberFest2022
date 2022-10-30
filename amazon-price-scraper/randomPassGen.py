# generate random password
import random
import string
def randPassGen(length):
    password = ''
    for i in range(length):
        password += random.choice(string.ascii_letters + string.digits)
    return password

print(randPassGen(8))