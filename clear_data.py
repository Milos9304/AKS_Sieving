import os
from os import listdir
from os.path import isfile, join

for f in listdir("data"):
    with open("data/"+f, 'r') as infile:
        data = infile.read()
        data = data.replace("[", "")
        data = data.replace("]", "")

    with open("data/"+f, 'w') as outfile:
        outfile.write(data)

    os.system("sed -i \'/^$/d\' data/"+f)
