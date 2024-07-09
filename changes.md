# [Cha-cha-cha-cha CHANGES](https://www.youtube.com/watch?v=4BgF7Y3q-as&ab)

César:
1. Adicionada a syscall settickets (não testada)
2. Adicionada lógica de fork herdar o valor de tickets do pai (kernel/proc.c -> linha 324)
4. Mudada logica do scheduler (kernel/proc.c -> linha 450)
5. Adicionado ticks do processo