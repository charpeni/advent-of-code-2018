let solve = input =>
  input
  |> Js.String.replaceByRe([%re "/\\n/g"], ",")  /* Input can also contain new line character as a separator */
  |> Js.String.split(",")
  |> Array.to_list
  |> List.map(string => string |> Js.String.replace("+", ""))
  |> List.map(Js.String.trim)
  |> List.map(int_of_string)
  |> List.fold_left((acc, number) => acc + number, 0);
