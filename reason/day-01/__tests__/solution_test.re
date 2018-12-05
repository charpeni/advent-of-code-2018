open Jest;

open Expect;

describe("Day 1", () => {
  test("Should handle example situations correctly", () => {
    expect(Solution.solve("+1, -2, +3, +1")) |> toBe(3);
    expect(Solution.solve("+1, +1, +1")) |> toBe(3);
    expect(Solution.solve("+1, +1, -2")) |> toBe(0);
    expect(Solution.solve("-1, -2, -3")) |> toBe(-6);
  });

  test("Should handle provided input correctly", () =>
    expect(
      Solution.solve(Node.Fs.readFileAsUtf8Sync("__tests__/input.txt")),
    )
    |> toBe(574)
  );
});
