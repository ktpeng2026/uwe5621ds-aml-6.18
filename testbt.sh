
sudo systemctl stop bluetooth
sudo pkill -9 btattach 2>/dev/null
sudo pkill -9 hciattach 2>/dev/null
sudo rfkill unblock bluetooth
sleep 3
rfkill list bluetooth
sudo btattach -B /dev/ttyBT0 -P h4 -S 115200 &
sleep 3
hciconfig -a
sudo hciconfig hci0 up
sudo systemctl start bluetooth
sleep 2
bluetoothctl list
bluetoothctl show
bluetoothctl


