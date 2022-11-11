import random
import time

while (1):
    temperature = random.randint(0, 100)
    humidity = random.randint(0, 100)
    if temperature>60:
        print("ALERT!! Detected temperature: "+str(temperature)+"°C")
        time.sleep(1)