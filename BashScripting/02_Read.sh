#!/bin/bash

read -p "Which ip do you want to ping?: " ip_addr

ping -c3 -w5 $ip_addr
