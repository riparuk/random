import time
from selenium import webdriver
from selenium.webdriver.common.by import By

#inspect element web pages, get the button or text field, right click, copy, choose css selector or xpath or whatever you want.
login = 'div.row:nth-child(5) > div:nth-child(1) > button:nth-child(1)'  #css selector
absensi = ".pcoded-item > li:nth-child(2) > a:nth-child(1) > span:nth-child(2)"   #css selector
browser = webdriver.Firefox()
#Login website page i.e https://simkuliah.unsyiah.ac.id/
browser.get("https://simkuliah.unsyiah.ac.id/")
# identify username, password and signin elements
browser.find_element("name","username").send_keys("Your_Username")
#time.sleep(0.2)
browser.find_element("name","password").send_keys("Your_Pass")
time.sleep(1.0)
browser.find_element(By.CSS_SELECTOR, login ).click()    #click login button
time.sleep(3.0)
browser.find_element(By.CSS_SELECTOR, absensi ).click()     #click absensi button
time.sleep(3.0)
browser.close()

