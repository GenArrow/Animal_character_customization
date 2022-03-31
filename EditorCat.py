from PIL import Image, ImageOps
from blend_modes import soft_light
import numpy
import os


def add_hat_to_cat():
    img = Image.open(os.path.join(os.getcwd(), 'Dataset\\temphatimage.png'))
    background = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))

    background.paste(img, (0, 0), img)
    background.save(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))

    os.remove(os.path.join(os.getcwd(), 'Dataset\\temphatimage.png'))


def add_3D_to_cat():
    img = Image.open(os.path.join(os.getcwd(), 'Dataset\\Base3DCat.png'))
    background = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))

    background.paste(img, (0, 0), img)
    background.save(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))


def add_Sunglasses_to_cat():
    img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseSunglassesCat.png'))
    background = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))

    background.paste(img, (0, 0), img)
    background.save(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))


def add_Pendant_to_cat():
    img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseChainCat.png'))
    background = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))

    background.paste(img, (0, 0), img)
    background.save(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))


def tint_image(src, color):
    src.load()
    r, g, b, alpha = src.split()
    gray = ImageOps.grayscale(src)
    result = ImageOps.colorize(gray, (0, 0, 0, 0), color)
    result.putalpha(alpha)
    return result


def Creeaza():
    with open(os.path.join(os.getcwd(), 'tempFileForPreview.csv')) as inFile:
        line = inFile.readline()

    splitted = line.split(" ")
    name = splitted[1]
    catcolor = splitted[2]
    hatcolor = splitted[3]
    glasstype = splitted[4]
    haspendant = splitted[5]

    name = (os.path.join(os.getcwd(), "YourCharacters\\{}")).format(str(name) + "_cat.png")

    if catcolor != "N-are":
        img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseCat.png'))
        tinted = tint_image(img, catcolor)
        tinted.save(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))
        background_img_raw = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))
        background_img = numpy.array(background_img_raw)
        background_img_float = background_img.astype(float)

        foreground_img_raw = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseCat.png'))
        foreground_img = numpy.array(foreground_img_raw)
        foreground_img_float = foreground_img.astype(float)

        blended_img_float = soft_light(background_img_float, foreground_img_float, 1)
        blended_img = numpy.uint8(blended_img_float)
        blended_img_raw = Image.fromarray(blended_img)
        blended_img_raw.save(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))
    else:
        img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseCat.png'))
        img.save(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))

    if glasstype == "3D":
        add_3D_to_cat()

    if glasstype == "Sunglasses":
        add_Sunglasses_to_cat()

    if haspendant == "Are;":
        add_Pendant_to_cat()

    if hatcolor != "N-are":
        img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseHatCat.png'))
        tinted = tint_image(img, hatcolor)
        tinted.save(os.path.join(os.getcwd(), 'Dataset\\temphatimage.png'))
        background_img_raw = Image.open(os.path.join(os.getcwd(), 'Dataset\\temphatimage.png'))
        background_img = numpy.array(background_img_raw)
        background_img_float = background_img.astype(float)

        foreground_img_raw = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseHatCat.png'))
        foreground_img = numpy.array(foreground_img_raw)
        foreground_img_float = foreground_img.astype(float)

        blended_img_float = soft_light(background_img_float, foreground_img_float, 1)
        blended_img = numpy.uint8(blended_img_float)
        blended_img_raw = Image.fromarray(blended_img)
        blended_img_raw.save(os.path.join(os.getcwd(), 'Dataset\\temphatimage.png'))
        add_hat_to_cat()

    final = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))
    final.show()
    final.save(name)
    os.remove(os.path.join(os.getcwd(), 'Dataset\\tempcatimage.png'))


Creeaza()
