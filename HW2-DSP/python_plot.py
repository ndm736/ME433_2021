import matplotlib.pyplot as plt # for plotting
import numpy as np # for sine function

dt = 1.0/100.0 # 100Hz
t = np.arange(0.0, 5.0, dt) # for 5s

s = 2.0 * np.sin(2 * np.pi * 2.3 * t) + 2.5 # 2.3Hz

plt.plot(t,s,'b-*')
plt.xlabel('Time [s]')
plt.ylabel('Signal')
plt.title('Signal vs Time')
plt.show()

