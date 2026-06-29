ifconfig | grep -w "ether" | tr -d [:blank:] | cut -c 6-22
