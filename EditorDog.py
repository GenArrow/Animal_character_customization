from PIL import Image, ImageOps
from blend_modes import soft_light
import numpy
import os


def add_hat_to_dog():
    img = Image.open(os.path.join(os.getcwd(), 'Dataset\\temphatimage.png'))
    background = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))

    background.paste(img, (0, 0), img)
    background.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))

    os.remove(os.path.join(os.getcwd(), 'Dataset\\temphatimage.png'))


def add_3D_to_dog():
    img = Image.open(os.path.join(os.getcwd(), 'Dataset\\Base3DDog.png'))
    background = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))

    background.paste(img, (0, 0), img)
    background.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))


def add_Sunglasses_to_dog():
    img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseSunglassesDog.png'))
    background = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))


    background.paste(img, (0, 0), img)
    background.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))


def add_Pendant_to_dog():
    img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseChainDog.png'))
    background = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))

    background.paste(img, (0, 0), img)
    background.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))


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

    name = (os.path.join(os.getcwd(), "YourCharacters\\{}")).format(str(name) + "_dog.png")

    if catcolor != "N-are":
        img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseDog.png'))
        tinted = tint_image(img, catcolor)
        tinted.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))
        background_img_raw = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))
        background_img = numpy.array(background_img_raw)
        background_img_float = background_img.astype(float)

        foreground_img_raw = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseDog.png'))
        foreground_img = numpy.array(foreground_img_raw)
        foreground_img_float = foreground_img.astype(float)

        blended_img_float = soft_light(background_img_float, foreground_img_float, 1)
        blended_img = numpy.uint8(blended_img_float)
        blended_img_raw = Image.fromarray(blended_img)
        blended_img_raw.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))

    else:
        img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseDog.png'))
        img.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))

    if glasstype == "3D":
        add_3D_to_dog()

    if glasstype == "Sunglasses":
        add_Sunglasses_to_dog()

    if haspendant == "Are;":
        add_Pendant_to_dog()

    if hatcolor != "N-are":
        img = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseHatDog.png'))
        tinted = tint_image(img, hatcolor)
        tinted.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))
        background_img_raw = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))
        background_img = numpy.array(background_img_raw)
        background_img_float = background_img.astype(float)

        foreground_img_raw = Image.open(os.path.join(os.getcwd(), 'Dataset\\BaseHatDog.png'))
        foreground_img = numpy.array(foreground_img_raw)
        foreground_img_float = foreground_img.astype(float)

        blended_img_float = soft_light(background_img_float, foreground_img_float, 1)
        blended_img = numpy.uint8(blended_img_float)
        blended_img_raw = Image.fromarray(blended_img)
        blended_img_raw.save(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))
        add_hat_to_dog()

    final = Image.open(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))
    final.show()
    final.save(name)
    os.remove(os.path.join(os.getcwd(), 'Dataset\\tempdogimage.png'))


Creeaza()
