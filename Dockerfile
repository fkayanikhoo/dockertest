FROM ubuntu:20.04

RUN apt update && apt install -y gcc
WORKDIR /hidocker
COPY main.c .

RUN gcc main.c -lm -o pepi
ENTRYPOINT ["./pepi"]
