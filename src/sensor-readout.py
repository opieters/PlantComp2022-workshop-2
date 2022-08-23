import serial
import matplotlib.pyplot as plt
import pandas as pd

data = []

if __name__ == "__main__":
  ser = serial.Serial("COM13", 9600)
  
  try:
    while 1:
      if ser.in_waiting:
        value = ser.readline()
        print(f"Received {value})
        
        value = float(value)
        data.append(value)
              
        if (len(data) % 10 == 0) and (len(data) > 0):
              plt.figure()
              plt.plot(data)
              plt.ylabel("readout")
              plt.title("analogue sensor")
              plt.show()
              plt.close()
  except KeyboardInterrupt:
    df = {
      "pd": data
    }
    print("Keyboard interrupt. Saving the data")
    df = pd.DataFrame(df)
    df.to_csv("sensor-readout.csv", index=True, index_label="id")
