# Variable Shift Caesar Decoder

Decodificador en **C++** basado en el cifrado César con **desplazamiento variable por carácter**  
(Versión numérica del cifrado de Vigenère).
Decoder made in **C++** based on the Caesar Cipher with a variable shift per character
(I'ts like a numeric modded version of the Vigenere cipher).

---

## 📌 Description

Este programa permite decodificar un texto cifrado usando un desplazamiento distinto para cada carácter.
El usuario introduce:
This program lets you decode any ciphered text using a different shift value for each character.
You introduce:
1. Ciphered text
2. A numeric code with the same word spacing and lengths as the text.

The program output the decoded ( original ) text

---

## 🔐 Cipher type

- Polyalphabetic substitution cipher
- Based on the **Caesar Cipher**
- Variable shift per character
- Similar to the **Vigenère Cipher (numeric)**

---

## 🛠️ Requirements

- For Linux:
- `g++` (C++ compiler)

- For Windows:
- `MinGW-w64` (g++) (C++ compiler)

## ⚙️ How to use it
- For Linux:
- Open terminal and use the following steps:
- 1. g++ caesarDecoder.cpp -o decoder
- 2. ./decoder
 
- For Windows:
- 1. g++ decoder.cpp -o decoder.exe
- 2. decoder.exe



