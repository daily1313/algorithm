package map;

import java.util.Hashtable;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.TreeMap;

public class HashMap {

    public static void main(String[] args) {
        System.out.println("HashMap");
        Map<String, String> map = new java.util.HashMap<>();
        map.put("A", "1");
        map.put("B", "2");
        map.put("C", "3");
        map.put("D", "4");

        map.get("A");

        for (String key : map.keySet()) {
            System.out.println("key = " + key + " value = " + map.get(key));
        }

        System.out.println("--------------------");

        System.out.println("LinkedHashMap");

        Map<String, String> linkedHashMap = new LinkedHashMap<>();
        linkedHashMap.put("A", "1");
        linkedHashMap.put("B", "2");
        linkedHashMap.put("C", "3");
        linkedHashMap.put("D", "4");
        linkedHashMap.put("E", "5");

        for(String key : linkedHashMap.keySet()) {
            System.out.println("key = " + key + " value = " + linkedHashMap.get(key));
        }

        System.out.println("--------------------");

        System.out.println("TreeMap");

        Map<String, String> treeMap = new TreeMap<>();
        treeMap.put("E", "1");
        treeMap.put("A", "2");
        treeMap.put("C", "3");
        treeMap.put("B", "4");
        treeMap.put("D", "5");

        for (String key : treeMap.keySet()) {
            System.out.println("key = "  + key +  " value = " + treeMap.get(key));
        }

        System.out.println("---------------------");
        System.out.println("HashTable");

        Map<String, String> hashTable = new Hashtable<>();
        hashTable.put("A", "1");
        hashTable.put("B", "2");
        hashTable.put("C", "3");
        hashTable.put("D", "4");

        for (String key : hashTable.keySet()) {
            System.out.println("key = " + key + " value = " + hashTable.get(key));
        }
    }
}
