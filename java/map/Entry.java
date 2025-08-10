package map;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class Entry {

    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<>();
        map.put("A", 0);
        map.put("B", 0);
        map.put("C", 0);

        Set<Map.Entry<String, Integer>> entry = map.entrySet();

        System.out.println(entry);

        for (Map.Entry<String, Integer> e : entry) {
            System.out.println(e.getKey() + " = " + e.getValue());
        }
    }
}
