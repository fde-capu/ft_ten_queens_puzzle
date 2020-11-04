## ft_ten_queens_puzzle
### by fde-capu

#### Have ten queens on a 100 squares board, none of them facing each other.

Swimming pools are fun. So is chess.

This program is able to show all possible positions of ten chess queens on a 10x10 board when none of them are confronting each other. It also counts the number of possible solutions, but I will not spoil that number, just run the code yourself.

This was a great challenge by the time it was written. It was fun to solve; I went to sleep thinking about it, woke up, and wrote in a single pass, so I was really happy with the outcome.

The output is as follows:

    $>./a.out | cat -e
    0257948136$
    0258693147$
    ...
    4605713829$
    4609582731$
    ...
    9742051863$
    $>

Sequence is read from left to right, meaning the correspondent position to the first queen on first column, and so forth.

It is primarly a (bare first) study on recursivity.

---

*this project is part of the 42 São Paulo piscine: C05E08*

*just bragging, to my acknowledge, I was the only person to validate this exercise on my class*

---

Copyright 2020 fde-capu

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
