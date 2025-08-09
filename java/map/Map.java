package map;

import java.util.HashMap;

public class Map {

    public static void main(String[] args) {
        compute();
        computeIfAbsent();
        putIfAbsent();
        computeIfPresent();
    }

    // 1. compute():
    // (key, value) -> {}
    // case 1 - key o, value o -> return key value
    // case 2 - key o, value null -> delete key
    // case 3 - key x -> return null
    private static void compute() {
        HashMap<String, Integer> map = new HashMap<>();
        map.put("A", 0);
        map.put("B", 0);

        Integer value = map.compute("A", (k, v) -> v + 1);

        map.compute("B", (k, v) -> null);

        System.out.println("coumpute()");
        System.out.println("case 1 - " + value);
        System.out.println("case 2 - " + map.containsKey("B"));
        System.out.println("case 3 - " + map.get("C"));
        System.out.println("---------");
    }

    // 2. computeIfAbsent()
    // (key) -> {}
    // case 1 - key x -> execute lambda
    // case 2 - key o -> return value
    private static void computeIfAbsent() {
        HashMap<String, Integer> map = new HashMap<>();
        Integer value = map.computeIfAbsent("A", k -> 1);

        System.out.println("computeIfAbsent()");
        System.out.println("case 1 - " + value);
        System.out.println(map.get("A"));
        map.computeIfAbsent("A", k -> 2);
        System.out.println("case 2 - " + map.get("A"));
        System.out.println("---------");
    }

    // 3. putIfAbsent()
    // case 1 - key o -> return value
    // case 2 - key x -> mapping value to key, return null
    private static void putIfAbsent() {
        HashMap<String, Integer> map = new HashMap<>();
        Integer value = map.putIfAbsent("A", 0);
        System.out.println("putIfAbsent()");
        System.out.println("case 1 - " + value);
        System.out.println("case 2 - " + map.get("A"));
        Integer returnValue = map.putIfAbsent("A", 1);
        System.out.println("case 3 - " + returnValue);
        System.out.println("case 4 - " + map.get("A"));
        System.out.println("---------");
    }

    // 4. computeIfPresent()
    // key o -> execute lambda, return value
    // key x -> return null
    private static void computeIfPresent() {
        HashMap<String, Integer> map = new HashMap<>();
        map.put("A", 0);
        Integer value = map.computeIfPresent("A", (k, v) -> v + 1);

        System.out.println("computeIfPresent()");
        System.out.println("case 1 - " + value);
        System.out.println("case 2 - " + map.computeIfPresent("B", (k, v) -> v + 1));
        System.out.println("--------");
    }
}
