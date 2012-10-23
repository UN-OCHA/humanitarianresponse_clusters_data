<?php
/**
 * @file
 * humanitarianresponse_clusters_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_clusters_data_uuid_default_entities() {
  $entities = array();

  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/74199c79-70ed-f884-d555-8254d27bea01',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'CM',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Camp Coordination / Management',
    'name_original' => 'Camp Coordination / Management',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Camp Coordination / Management',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Camp Coordination / Management',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Coordination / Gestion de Camp',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '74199c79-70ed-f884-d555-8254d27bea01',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3587f445-38c0-7c94-e54b-ce7cf1a80dab',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ER',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Early Recovery',
    'name_original' => 'Early Recovery',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Early Recovery',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Early Recovery',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Récupération rapide',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '3587f445-38c0-7c94-e54b-ce7cf1a80dab',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f4f4d082-55b1-6d44-f1a3-180c06f9ebe4',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'E',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Education',
    'name_original' => 'Education',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Education',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Education',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Education',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f4f4d082-55b1-6d44-f1a3-180c06f9ebe4',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b3fe12df-d846-e024-2586-72690c26c607',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ES',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Emergency Shelter and NFI',
    'name_original' => 'Emergency Shelter and NFI',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Emergency Shelter and NFI',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Emergency Shelter and NFI',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Abris d\'Urgence',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b3fe12df-d846-e024-2586-72690c26c607',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d1673192-586b-6a24-056d-1779c4857d25',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ET',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Emergency Telecommunications',
    'name_original' => 'Emergency Telecommunications',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Emergency Telecommunications',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Emergency Telecommunications',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Télécommunications d\'Urgence',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Telecomunicaciones en Emergencias',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd1673192-586b-6a24-056d-1779c4857d25',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dcf0529f-f7d7-f0d4-d10c-0d110debe8c3',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'FS',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Food Security',
    'name_original' => 'Food Security',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Food Security',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Food Security',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sécurité Alimentaire',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Seguridad Alimentaria',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'dcf0529f-f7d7-f0d4-d10c-0d110debe8c3',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/33da548d-8d27-22c4-6954-a3c2a233e7de',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'H',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Health',
    'name_original' => 'Health',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Health',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Health',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Santé',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Salud',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '33da548d-8d27-22c4-6954-a3c2a233e7de',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7563ee82-d03a-4f84-6d2e-5c083be5c0a4',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'L',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Logistics',
    'name_original' => 'Logistics',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Logistics',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Logistics',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Logistique',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Logística',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '7563ee82-d03a-4f84-6d2e-5c083be5c0a4',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/13ce935d-af1f-b464-2165-f485bdee0851',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'N',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Nutrition',
    'name_original' => 'Nutrition',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nutrition',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nutrition',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nutrition',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nutrición',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '13ce935d-af1f-b464-2165-f485bdee0851',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2cbc351b-b3d1-6724-6d02-c1419d6594b1',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'P',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Protection',
    'name_original' => 'Protection',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protection',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protection',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protection',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protección',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '2cbc351b-b3d1-6724-6d02-c1419d6594b1',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/646c7ac3-4b96-46bb-912a-4b938b8eef5d',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'CP',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Child Protection',
    'name_original' => 'Child Protection',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Child Protection',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Child Protection',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protection de l\'Enfance',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protección de la Infancia',
        ),
      ),
    ),
    'parent' => array(
      0 => '2cbc351b-b3d1-6724-6d02-c1419d6594b1',
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '646c7ac3-4b96-46bb-912a-4b938b8eef5d',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/64aad47f-bc52-4559-89cd-81ead06c3f4e',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'GBV',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Gender Based Violence',
    'name_original' => 'Gender Based Violence',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gender Based Violence',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gender Based Violence',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Violence basée sur le Sexe',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Violencia basada en el Género',
        ),
      ),
    ),
    'parent' => array(
      0 => '2cbc351b-b3d1-6724-6d02-c1419d6594b1',
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '64aad47f-bc52-4559-89cd-81ead06c3f4e',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a6e1507f-8f8a-4511-9517-7c00a9d8823a',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'HLP',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Housing, Land and Property',
    'name_original' => 'Housing, Land and Property',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Housing, Land and Property',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Housing, Land and Property',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Logement, Terre et Propriété',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Alojamiento, Tierra y Propiedad',
        ),
      ),
    ),
    'parent' => array(
      0 => '2cbc351b-b3d1-6724-6d02-c1419d6594b1',
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'a6e1507f-8f8a-4511-9517-7c00a9d8823a',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/e12df655-30d3-40f8-9aec-9830af6e43fa',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'MA',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Mine Action',
    'name_original' => 'Mine Action',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mine Action',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mine Action',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Action contre les Mines',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Acción contra las minas',
        ),
      ),
    ),
    'parent' => array(
      0 => '2cbc351b-b3d1-6724-6d02-c1419d6594b1',
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'e12df655-30d3-40f8-9aec-9830af6e43fa',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d5195e8c-e724-af64-35a4-413a412e04f7',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'W',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Water Sanitation Hygiene',
    'name_original' => 'Water Sanitation Hygiene',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Water Sanitation Hygiene',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Water Sanitation Hygiene',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Eau, Assainissement et Hygiène',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Agua Saneamiento e Higiene',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd5195e8c-e724-af64-35a4-413a412e04f7',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );

  return $entities;
}
