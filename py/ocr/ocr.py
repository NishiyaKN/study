from PIL import Image
import pytesseract
import numpy as np
import pyautogui
import time

left = 300
top = 231
width = 770
height = 530
file = pyautogui.screenshot(region=(left,top,width,height))
file.save('test.png')
# file = 'test.png'
# img1 = np.array(Image.open(file))
barra = pyautogui.locateOnScreen('barra.png')
if barra:
    bl, bt, bw, bh = barra
    print("barra:",bl,bt,bw,bh)
else:
    print('Image not found')

sugestao = pyautogui.locateOnScreen('sugestao.png')
if sugestao:
    sl, st, sw, sh = sugestao
    print("sugestao: ",sl,st,sw,sh)

ch = height - st
crop = pyautogui.screenshot(region=(left,top,width,ch))
crop.save('crop.png')

text = pytesseract.image_to_string(crop)
print(text)
