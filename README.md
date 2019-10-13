# Equirectangular2Perspective

This repository is a set of code to convert a equirectangular panorama image into a normal perspective view.

### Requirement
- OpenCV 3.4

### How to use
1. Put a input equirectangler image on the `data` directory

2. Enter the following commands:
    ```
    $ mkdir build && cd build
    $ cmake ..
    $ make
    $ ./Equirectangular2Perspective
    ```

### Result
#### Input: panorama image
![inputImage](https://user-images.githubusercontent.com/26996041/66710246-71740780-edaf-11e9-9df3-e81fc70d22eb.jpg)

#### Output: perspective image
<img width="1079" alt="スクリーンショット 2019-10-13 11 46 03" src="https://user-images.githubusercontent.com/26996041/66710253-9799a780-edaf-11e9-994b-c88f5dc3091a.png">