
import os

BATTERY_DIR = "/sys/class/power_supply/BAT0"
if os.path.exists(BATTERY_DIR):
    print("Battery present")
else:
    print("No battery found")
