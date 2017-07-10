# md5matcher (C++)

Simply get matches between 2 files:
  - A list of hash
  - A dictionnary

### Usage

Compile it:

```sh
git clone https://github.com/biji1/md5matcher.git
cd md5matcher
make
```

Run it:

```sh
./md5matcher example/hashes example/words
```

Output:

```sh
"c0af77cf8294ff93a5cdb2963ca9f038" -> "tree"
"e6d96502596d7e7887b76646c5f615d9" -> "car"
"7813258ef8c6b632dde8cc80f6bda62f" -> no match found
"df53ca268240ca76670c8566ee54568a" -> "computer"
"a1b8585122e1ad60623d6a74d3eb3b6a" -> "cake"
time elapsed: 0 second(s)
```

### About

@2016
