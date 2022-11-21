import time
from selenium import webdriver
from selenium.webdriver.common.by import By

#inspect element web pages, get the button or text field, right click, copy, choose css selector or xpath or whatever you want.
login = "div.row:nth-child(5) > div:nth-child(1) > button:nth-child(1)"  #css selector
#login = "/html/body/section/div/div/div/div[1]/form/div[2]/div[4]/div[1]/button"    #xpath
absensi = ".pcoded-item > li:nth-child(2) > a:nth-child(1) > span:nth-child(2)"   #css selector
#absensi = "/html/body/div[2]/div[2]/div/div/nav/div[2]/div[1]/div/ul/li[2]/a/span[2]" #xpath
hadir = "#konfirmasi-kehadiran" #css selector
#hadir = "//*[@id="konfirmasi-kehadiran"]" #xpath
konfirmasi = ".confirm" #css selector
#konfirmasi = "/html/body/div[4]/div[7]/div/button" #xpath

browser = webdriver.Firefox()
#Login website page i.e https://simkuliah.unsyiah.ac.id/
browser.get("https://simkuliah.unsyiah.ac.id/")
# identify username, password and signin elements
browser.find_element("name","username").send_keys("Your_user")
#time.sleep(0.2)
browser.find_element("name","password").send_keys("Your_pass")
time.sleep(1.0)
browser.find_element(By.CSS_SELECTOR, login ).click()    #click login button
time.sleep(3.0)
browser.find_element(By.CSS_SELECTOR, absensi ).click()     #absensi button
time.sleep(3.0)
browser.find_element(By.CSS_SELECTOR, hadir ).click()  #hadir button
time.sleep(3.0)
browser.find_element(By.CSS_SELECTOR, konfirmasi ).click()     #konfirmasi button
time.sleep(5.0)
browser.close()

