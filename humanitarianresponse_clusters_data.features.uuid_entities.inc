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
      'type' => 'file',
      'uri' => 'file/1dd2058a-1b6e-fb64-358e-5747e42b6bd1',
      'cause' => 'taxonomy_term/74199c79-70ed-f884-d555-8254d27bea01',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => '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',
    'filemime' => 'image/png',
    'filename' => 'ccm.png',
    'filesize' => '1471',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/ccm.png',
    'uuid' => '1dd2058a-1b6e-fb64-358e-5747e42b6bd1',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/74199c79-70ed-f884-d555-8254d27bea01',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => '1dd2058a-1b6e-fb64-358e-5747e42b6bd1',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'ccm.png',
          'filesize' => '1471',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/ccm.png',
          'uuid' => '1dd2058a-1b6e-fb64-358e-5747e42b6bd1',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'CM',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Camp Coordination / Management',
    'path' => array(
      'alias' => 'clusters/camp-coordination-management',
      'pathauto' => FALSE,
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
    'uuid' => '74199c79-70ed-f884-d555-8254d27bea01',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/2dbbe419-afa2-8544-c9bb-c2af41bd1c61',
      'cause' => 'taxonomy_term/3587f445-38c0-7c94-e54b-ce7cf1a80dab',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => 'iVBORw0KGgoAAAANSUhEUgAAAEsAAABLCAYAAAA4TnrqAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAASxSURBVHja7NzvaxN3HAfw3OWSXJL+Wn9i1mraqE3T6hRd52QgFFsFnygM7NiTDepge+RgsPnAZ3siCMLYnqj0wdjYPzAcrVZQJmhRG21ak9qk7QrqmsbGJk16P5LbfQ4jade0+XF3TXKfD4Qe5Pq95MX7++O+V0oIgqDDyq5IJEAsxEIsxEIsxEICxEIsxEIsxEIsJEAsxNruotS82LDrw2Z6t/38Ru8lee4V93LhhvDPv5NyX7cv5JelHUKtzb/hrm6bfjk+n1iJZUyz3mpJwk/LBx1+JsFeZdzenwmGW9Uc1lDb/pqqTucoHDNTs62JeFxC2wrPfHjfcMTt+Yx4sxLWDJaUrjrH2ovvbHKZW3dd4Cf8/exiiNoS7f7jM/kkrSywUiWYDLSI8SPn9n67WdKM9XU8X195MumdHdkOrKKYDSEtq/cefye0NPYBSKbzIH3E/MJwxbGP/gJgTS8dIDGQnNRAv1FB8qJ3HpysdLXPCtXWGk2vswAMxqetzouOeZrEcAV1TbXNml6Uwuy3WbrSu6UxQcyoBVaUWLBMMO9tC2ZzrppgRXu7Q5hNy9meC2Bms9WnWSz+xcL7uZzPBkO00ukqzm4oLlalL59DwSxZ4dxzTXNY1rqG25stTjNV/OF4H0BrBgsWnPGpQEM+vwvAhhj/RKnuSBYdlJiOfFK1fnZUImFkOUGlg5GhyHjl0UNTlrMn+odsTrpssGyXvr8kF1R6l2Sm5/bYz5z+Q5dIGm5/0jtw79SntzLdzJcM1uLI3REl2jW12DyT/V/3Enwiwj8LXFt96u2xHjl4q6S3aKCoA+2f827fb3Jdy9Lu0MV8/lPi4Q2quorj3yxL+2V6i1lIVFua+zyjL3Jtk1Lqy2dTgoGyVrTvnmEE7gcRatB47NB59s6jw4VC0a07YyKUlWx472gyuCSIUGuvG1uNqZ6sQrBSUCser7RMIOtrOpOLYXhY0SO+/tct4cZabzYnTS7HGJfg71KUoZOdmD6+fofV2FjPswuLBspp/5L3zg6uaUNMFbFrx1c9f9+8XjJY66HefRiT0S4w7Jyx98gke/N+xzsA2BB02C6wD8Yvr2nHZKBhXwu2a6Su17nXHZuYOph6eyMocey6nu/OqepYmaDSP1NqDBOez/8Kuw+RwIwz0wMLWE/BMoGkTQwXWrJsBCW119F2DqDgOF8sVWfDLKCk08Sxplscw37XuewfRyZ99s2e7MBzxpYrFwe5pTCk65utoAopqsigYGwSiMbaruPeh/DYbDTLhJ8TQQZEkF+UglINKyco+44BfsI/mFP71dYaYe7l1UxjVOnc7tRWtRkrK8JKQUnjlthNAQaAlIJSPlkilEFH+rjXYUopqFQBDNFUO0a7HF+woaWhxLPAn3J/HaocoNJmt0dvXyW0n6UilJpFItR2YZUxlLxYZQ4lH5YGoOTB0ghU4VgagioIC/7sUUtQBScrybB6rUAVhHUi8DRMH+gY0QpUwcmKjj45bWq2xbQAVTAWwfErTCy6z9rlDJY7lDxLh9fLgahvupXu3v8TpKxcoaRw4L9X2e5dB8TCQizEQizEQizEwkIsxEIsxEIsxMJCrBzqPwEGADxxoNNiHKjQAAAAAElFTkSuQmCC',
    'filemime' => 'image/png',
    'filename' => 'early_recovery.png',
    'filesize' => '1311',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/early_recovery.png',
    'uuid' => '2dbbe419-afa2-8544-c9bb-c2af41bd1c61',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3587f445-38c0-7c94-e54b-ce7cf1a80dab',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => '2dbbe419-afa2-8544-c9bb-c2af41bd1c61',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'early_recovery.png',
          'filesize' => '1311',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/early_recovery.png',
          'uuid' => '2dbbe419-afa2-8544-c9bb-c2af41bd1c61',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ER',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Early Recovery',
    'path' => array(
      'alias' => 'clusters/early-recovery',
      'pathauto' => FALSE,
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
    'uuid' => '3587f445-38c0-7c94-e54b-ce7cf1a80dab',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/8cae9826-5f63-6194-b9da-9bcb5eee55ae',
      'cause' => 'taxonomy_term/f4f4d082-55b1-6d44-f1a3-180c06f9ebe4',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => 'iVBORw0KGgoAAAANSUhEUgAAAEsAAABLCAYAAAA4TnrqAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAAPfSURBVHja7NtLTNNwHAfwtnuV7gE4HCBMJUR5KizG1/CZKIkHTUxIjAeumph40buPeNN4UU/Gkzc1McZ48RGJmgGKAVFBGSoSN14y2UZXu7Vr7X8CQRmKQ9nU7y9Z1q79///9ffpv0+W30aqqUoi5BQMCYAELWMACFrBAACxgAQtYwAIWCIAFLGABC1jAAsHcQ59qwzv20p/vZNAZaXtOIVlUxiMBOiLy6U64PvB24bG+R2Gc+eXGfIfbxHJ74x/HXEpE4Mgmoa/fTN7NJcsiials5gTd4twOKS55RJ//hvJu4Plch6EL7MtMJc5dxixuC61Sdum9v25GQovtw7SZfTPV/4fh15QUj/2ONOlUqztkZumrSrdy+fkH5T7/nkmUXwlOAyR4VJ7tCt/ZfYIaGw/M2CnXarfUVJ6gRsP7yAn41XHIGIbigteRT6NHZe/7lvohb2zBsR43NN4mZ/b7g9fn2BRjUeE4syTviUKpQ980GgjsiYfCbNQ3aEqWlL6k6GbocfsBcrmSWWSrKLs4+xgFAuNY5FMMupffJBSKbJb6B+yxoZEZV42luuKj+8EtR1ouw8kkyMHrXGVnxI7uM3IwHNBeFNXV88O2upoVu7MW5Z0SmttXK9Eoneirr3+/tbpiB+PIvUdma6ipeQqJq1rJSznc8VhX72Wt/9GvY8zev8oaWeOaykOGoHBS6PJaEvfNiVtDWmaWlky9ZfvGTr6ppTbVA1BZA2utrfbyrR3OZNuNBQ5Zshrdaq+vLeVbal3tEcnz7CyZvZue3rek7dFB0dPP53W2REnUoJYa3DWHk0FFg0HrfKBIyCOjj/6p5yypufMCV1UWmv4ZgaLFmIiH0iQR1SuNk8vm9bXDmQSVcVgKL/im7mXZ5kdUhgW+7gALWMACFrAQwAIWsIAFLGAhgAUsYAELWP9o6P/4CIX25TTH5k6uKv6RV6RIMd9u6RXFa6evz7eokR4sDcdSXX5RevVuS6KYOhigphfbaDKdTSaVc1X6ooxyOtbefWkueATHXFx8WezoXikHw4yGMzOZHJvCuiq9n0Njx+LtPdcyFosuLXJlsZYmoasnmx/0/HBfUlSdqBOe15lM57iddfcSuG/9U5Vq4Y6nQUs+zq5d1Sq2vdgg9/oYPgnQ9CCIfFNrubZ4NVG1XrfqeuRhWyOdKVjM+OdtXFVZkCAJKbRPwN317Jw1+bsedyrHRdrKGrgh29ZgcjqpyE+gFwRrtkpypoQcClPy/Zb0zyxu4mdE/0vQ+EM5nrOABSxgAQtYIAAWsIAFLGABCwTAAhawgAUsYIEAWMAC1l8UXwQYAKlqpcu1f2XhAAAAAElFTkSuQmCC',
    'filemime' => 'image/png',
    'filename' => 'education.png',
    'filesize' => '1101',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/education.png',
    'uuid' => '8cae9826-5f63-6194-b9da-9bcb5eee55ae',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f4f4d082-55b1-6d44-f1a3-180c06f9ebe4',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => '8cae9826-5f63-6194-b9da-9bcb5eee55ae',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'education.png',
          'filesize' => '1101',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/education.png',
          'uuid' => '8cae9826-5f63-6194-b9da-9bcb5eee55ae',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'E',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Education',
    'path' => array(
      'alias' => 'clusters/education',
      'pathauto' => FALSE,
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
    'uuid' => 'f4f4d082-55b1-6d44-f1a3-180c06f9ebe4',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/53b49dee-3480-3db4-bd27-98a8a310bd23',
      'cause' => 'taxonomy_term/b3fe12df-d846-e024-2586-72690c26c607',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => 'iVBORw0KGgoAAAANSUhEUgAAAEsAAABLCAYAAAA4TnrqAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAAOESURBVHja7JxfSFNRGMDvPTrROWexaWMmrId6KKT0pQgfjHwSHzbpH9SLERKU+BQRQ/HFp3rLRfigED1I09ZT+JAR/XuQyCdJgogwh2mtWrrBdte63+LKbXm3c7f752z7Priwe3furvvd3/nuOd+R8el0msOgC4IIEBbCQlgIC2EhLESAsBAWwkJYCAthIQKEhbAQFsIqPB5OjTlgQ1gU0fIpMQTb9Li/DmHliNDdUcfmVGj45+37w7YaqwNh5Qj3WnootbmVed38du0ea3YR1qyS9n8EH59gzS4mYIFBcqukYM0uJmCBQZCnso+DXbstDfsQlswqMEgRZPD1Eit2ERasAoOU3t9aXOKaquwHKx5WPqukqJ199YYFuwjLVrFmF2HdKpbsMg0WmEJjldyuVqGhp+JggSFgitrzkhOPZsy0i5hlFZiiNhJfNky1i5SKVSzYRUrFKrldnljdxbKHVaxV28k+8GAcJt5lDatYq6SACTdMvI2GxRv1P6VglevOfAy6kRZRZavnojf6nL7Lo9/Kzix4imkFyiy7DDFLrVU1e5o4mrZgV9x/trV3wP+5bMxSY9Wu0z1catBHbZeRBUJihFUwNqLNQ+sdrr0bqai1vv2QQHOOkeVnwpJVtn7fiNilVs9dHYt/P3PUQ3sNo+zSFRaMhWitgjz10SnckvY3E7GI2CXnWLJLV1jwtKK1SsxTHWCUtA+vxS55ifZazvn3L/S2i+hplXxpK1fYuzuXxTy1nH1cjV3RJy89ehcIiZ5WZS9tKSX1rycPdMutktu1esRxHtrQhN4FQmK2VVJSV3pfHKFHoA3VnFHn8jMx0ypI6mEXH8jXDtqwYBcx0ypyxdcF5uRrp9YuN28/xjwsuKMtH+I3aayCQWc4HV2g/WwYVoCJNPE7EHqqh12awsosbU3O9NO0hUHnTkldKaCtZcDbR9NWr/Iz0dIq2qWtxsELmWGB2musVP+ao7VLj/JztaZWBafzLm1BohYTNscJfwHnMmmnY895exc3MvFMhV2zppdoFq5dn0wuvtvucsnwOqdVvQrssbibhRxJnOomw42p3f/vFHPF22ZV0/01MQtAaVEiVrJC3Iq2Hh40//2N3jZ2qw7lFIXfvd7jpxo72w+X2heOcELB5/L4IxjYDREWwkJYCAthIQKEhbAQFsJCWAgLESAshIWwEBbCqvj4I8AAtAnFU6m3bWcAAAAASUVORK5CYII=',
    'filemime' => 'image/png',
    'filename' => 'emergency_shelter.png',
    'filesize' => '1010',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/emergency_shelter.png',
    'uuid' => '53b49dee-3480-3db4-bd27-98a8a310bd23',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b3fe12df-d846-e024-2586-72690c26c607',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => '53b49dee-3480-3db4-bd27-98a8a310bd23',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'emergency_shelter.png',
          'filesize' => '1010',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/emergency_shelter.png',
          'uuid' => '53b49dee-3480-3db4-bd27-98a8a310bd23',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ES',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Emergency Shelter and NFI',
    'path' => array(
      'alias' => 'clusters/emergency-shelter-and-nfi',
      'pathauto' => FALSE,
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
    'uuid' => 'b3fe12df-d846-e024-2586-72690c26c607',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/8fee2ea7-5aa5-df74-c56f-ed9a93bc8475',
      'cause' => 'taxonomy_term/d1673192-586b-6a24-056d-1779c4857d25',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => 'iVBORw0KGgoAAAANSUhEUgAAAEsAAABLCAYAAAA4TnrqAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAAdTSURBVHja7Jx5bFTHHcdn3rH73u56D6+vGHt9YLKLj5qYcJQkOHXsQBKSSC2NSJCgIg1NGhLS5qjURIiqDWqbIhIFqFTlopT8kZsjIcaRIUVgkdoVwRgbYhsWXzHO2nt4d9++azrzrEWQNgZUO7B4Rnp6O/Nm5r35vN/vN9+ZXS1ECAGaLi8xFAGFRWFRWBQWhUVhUQQUFoVFYVFY12fiJqvjfe7pV1QfmXmBsVvLOIf9KZKHo9JdxoU0SzNC+pAWj7+vfRP8FCYU6Ur6vTPQNWFjgpO1kL5cWDDH/YDnhbXVZ59c/0uk6+PXZRhQtvPNPac2bd4kN/6rcerAcqYtBMHI5+bsLLX6RBPXkDkDQI7TubzsY4iBxy96SB2V64GgV4tERbGoAMiD53T81Bo7t3TxpaBNJCzuavi+qaSgHkbiNaaKfBDr9sPWv27dgDKdr6LB4a/l7p7vdlW7xa45LevVruivLNOLGPX46Xo+0x2RQ6E8KKux6yvAMzAHmniFZ/nqBYf2nk3/xbKtqirbBl7Y+DzAoC7pBuFYONHS9msc30QMbRMpU4YCLgwqii216LqBRQI4drOe9AXzODUcAYdWP/qIf826x5MBm1iN5Se1S8XSGadJlhyQZYzDNruiw/30qmdAdnqOAQ23IdBkqOfjOGbEEU4Hp5LXUx6WpbignUuzccEjzXpCVwqTsYZAtMyt3Of56Y/PeObc8q46MFQIWXYMsKYbh9I76J392+dfMiO2x3Vv7RfnoWBr1HnWUr572x78Ajj79OIjpL+UhmWu9L4ab+8sVAIjQDNx3qTLwdyMMmwlcTAUrGMtFpf/rR1AA/ozSNMg4ljybBBkuYo0l2VJ+xuvb4EcC0d2fzaHQDPVzKlJWlnr8seWi548KXy42eOqW7h7ssYx6bMhcS9O0Ue0uMTwZdPXKW1dvzeCPB6sdqStwZyVySihMFB0dQUIRRoRhBWAYfy4SgdUtYseDjmsLltR4XD0aJuRt9bdsiXacGiNMZDi3GI+kjhpxLE0sxd193dP9Gw46ZaV+9xjv2EsIiMU5A0nQRE3gm3+eqQoMGf9k39XhkcglhHbkd2KMtau3MsJwgkMioguxJh4jXWk9QLR/DAMRUcwKJixZsUTvMOuYFCP8/Mr7jZAYjjsDZlNSNU4gRMOpJxlkfghOF0Rkk8k4ndgIP8kn+03Vw6Fm7/McC6+/WTw0wM+UmZbuqghtquxtnagA3w+c/75ftTRKMhftXwss7QanL7zZ2Y8+8m2mgUvJVqOr1WjMQ4BNAuo2jFg4vOArBjaA6bbF6DhcFPKWJZ1SfUSU1YGlxg8xyVBEfdL9Aw4cbAHIwcOzzRiWknhutH36mtx3NJOf7LnH6i88A5JijqkUFAEPs9s5MvfWvTUo92BJzYAa1FBB2kz2nj42eKXf7cjb+UyyLldHxg3lJVe8Qe+g7zLCYS83D+llGWJ5d5Wqb2znMlKf1MbGFpFymcf3HXQXVp26/Hm/aB/0c9hMhzxTofGzil9WGpo2vY/hSyGjI527sMuy5oqfY/IX3a8Bj3ZHOgPyGMzp+YDCJ1iq3xVC9/Z8W54oK+/5bb7bkuZ5Q4jCJouSQywiWVgNH4COG3FnA6/MoJwQrKSmYy1iLIWi/NYRz0b2PjGX8ZdblSUPAD7Am8L025gw/4zDiJSxeKCcLzbn8b5CleoHWe2G/XsaZpxDzmRu6ivffDad0OWyTBAGT6DQZFBZGfcivUQI8wo/IqAgm7HXAKKd7uUbzZv33ypLtXWzne8217e65xbBViz+XWjMMv1ITnxTmdtsh6fnREg92HSLHkpobOgwzYjKS7P87NZK403DvSPjUHlZq80ztNyTly49WK970dPmzLdiuCZFv+2Kj/70a6dRv+SstDoKxj8zOhbQ/PO31swh43BOe2zUkOUOm2Dtpk3AtO0nHOXtBikHbowrx099Qd5KMBJZ/sE67zK5Rdei+xvMpQ/NJt4o+5IqPW/XhTPhQxLtloqUwKW3jfUb1t29wbgzX8wWZbo8m+xzb/pC3I2Jq8zva+IM0v85HxhW2FW6djMmelWpd6B/d/ul7npxq3Ik2W4nT4c7rT9sOqIFAm9mKwT6+ldba0q/7fU0f1iSsyG/8/OKVHjWGR2YR3WgnXYzRM5o6XOFk2KJwqLwqKwrnr63vbgjf2n1u76y6ocSQCyhom1tFYSzYU/bpxSsCwm65+DWDtdSRuitUDTsT9OOVgX+f6Ynhxfp8kKjVmO++saNAaIGAb8rkMTTS7nPTVHpzyscMfJtXhdN+5X8DAUDYY6Ox+isyGVDhQWTRQWhUVhUVgUFoVF09WGZfd5X0HC+D8LItcdJSVvX2uwvveFdGhnQx1r4uNgvMW0DkDw40Yw5WFdqzsKNGZRWBQWhUVhUVg0UVgUFoVFYU3IA4qCOuWWO5FzX692Lr79b1faLiZHn7tWYEH6l1A0ZlFYFBaFRWFRWBQBhUVhUVgUFoU15dN/BBgA39wmtRllm1cAAAAASUVORK5CYII=',
    'filemime' => 'image/png',
    'filename' => 'emergency_telecommunications.png',
    'filesize' => '1985',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/emergency_telecommunications.png',
    'uuid' => '8fee2ea7-5aa5-df74-c56f-ed9a93bc8475',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d1673192-586b-6a24-056d-1779c4857d25',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => '8fee2ea7-5aa5-df74-c56f-ed9a93bc8475',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'emergency_telecommunications.png',
          'filesize' => '1985',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/emergency_telecommunications.png',
          'uuid' => '8fee2ea7-5aa5-df74-c56f-ed9a93bc8475',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ET',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Emergency Telecommunications',
    'path' => array(
      'alias' => 'clusters/emergency-telecommunications',
      'pathauto' => FALSE,
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
    'uuid' => 'd1673192-586b-6a24-056d-1779c4857d25',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/f2226c03-23b9-f774-c197-d0d4f943116e',
      'cause' => 'taxonomy_term/dcf0529f-f7d7-f0d4-d10c-0d110debe8c3',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => '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',
    'filemime' => 'image/png',
    'filename' => 'food_security.png',
    'filesize' => '2259',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/food_security.png',
    'uuid' => 'f2226c03-23b9-f774-c197-d0d4f943116e',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dcf0529f-f7d7-f0d4-d10c-0d110debe8c3',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => 'f2226c03-23b9-f774-c197-d0d4f943116e',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'food_security.png',
          'filesize' => '2259',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/food_security.png',
          'uuid' => 'f2226c03-23b9-f774-c197-d0d4f943116e',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'FS',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Food Security',
    'path' => array(
      'alias' => 'clusters/food-security',
      'pathauto' => FALSE,
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
    'uuid' => 'dcf0529f-f7d7-f0d4-d10c-0d110debe8c3',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/e8abf6b0-16d0-b584-5919-9437e15c3d9d',
      'cause' => 'taxonomy_term/33da548d-8d27-22c4-6954-a3c2a233e7de',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => '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',
    'filemime' => 'image/png',
    'filename' => 'health.png',
    'filesize' => '2063',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/health.png',
    'uuid' => 'e8abf6b0-16d0-b584-5919-9437e15c3d9d',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/33da548d-8d27-22c4-6954-a3c2a233e7de',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => 'e8abf6b0-16d0-b584-5919-9437e15c3d9d',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'health.png',
          'filesize' => '2063',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/health.png',
          'uuid' => 'e8abf6b0-16d0-b584-5919-9437e15c3d9d',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'H',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Health',
    'path' => array(
      'alias' => 'clusters/health',
      'pathauto' => FALSE,
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
    'uuid' => '33da548d-8d27-22c4-6954-a3c2a233e7de',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/6f86ed6e-cbb8-a554-b59a-697c80e25ef7',
      'cause' => 'taxonomy_term/56c227fe-47a4-3a44-195e-f3ae10fbc2eb',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => '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',
    'filemime' => 'image/png',
    'filename' => 'im.png',
    'filesize' => '1967',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/im.png',
    'uuid' => '6f86ed6e-cbb8-a554-b59a-697c80e25ef7',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/56c227fe-47a4-3a44-195e-f3ae10fbc2eb',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => '6f86ed6e-cbb8-a554-b59a-697c80e25ef7',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'im.png',
          'filesize' => '1967',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/im.png',
          'uuid' => '6f86ed6e-cbb8-a554-b59a-697c80e25ef7',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'IM',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Information Management',
    'path' => array(
      'alias' => 'clusters/information-management',
      'pathauto' => FALSE,
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
    'uuid' => '56c227fe-47a4-3a44-195e-f3ae10fbc2eb',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/e65a13bc-fd3c-3044-f564-e125546b6617',
      'cause' => 'taxonomy_term/7563ee82-d03a-4f84-6d2e-5c083be5c0a4',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => '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',
    'filemime' => 'image/png',
    'filename' => 'logistics.png',
    'filesize' => '2115',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/logistics.png',
    'uuid' => 'e65a13bc-fd3c-3044-f564-e125546b6617',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7563ee82-d03a-4f84-6d2e-5c083be5c0a4',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => 'e65a13bc-fd3c-3044-f564-e125546b6617',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'logistics.png',
          'filesize' => '2115',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/logistics.png',
          'uuid' => 'e65a13bc-fd3c-3044-f564-e125546b6617',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'L',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Logistics',
    'path' => array(
      'alias' => 'clusters/logistics',
      'pathauto' => FALSE,
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
    'uuid' => '7563ee82-d03a-4f84-6d2e-5c083be5c0a4',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/81b03b78-a28e-a5a4-ddce-ba6ecdef2915',
      'cause' => 'taxonomy_term/13ce935d-af1f-b464-2165-f485bdee0851',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => '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',
    'filemime' => 'image/png',
    'filename' => 'nutrition.png',
    'filesize' => '2627',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/nutrition.png',
    'uuid' => '81b03b78-a28e-a5a4-ddce-ba6ecdef2915',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/13ce935d-af1f-b464-2165-f485bdee0851',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => '81b03b78-a28e-a5a4-ddce-ba6ecdef2915',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'nutrition.png',
          'filesize' => '2627',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/nutrition.png',
          'uuid' => '81b03b78-a28e-a5a4-ddce-ba6ecdef2915',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'N',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Nutrition',
    'path' => array(
      'alias' => 'clusters/nutrition',
      'pathauto' => FALSE,
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
    'uuid' => '13ce935d-af1f-b464-2165-f485bdee0851',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/737ad63b-8354-5cb4-e9de-855faadae983',
      'cause' => 'taxonomy_term/2cbc351b-b3d1-6724-6d02-c1419d6594b1',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => 'iVBORw0KGgoAAAANSUhEUgAAAEsAAABLCAYAAAA4TnrqAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAAUESURBVHja7NxbaFt1HAfw/zk5J/e2sWnSy5Jim7pBL7Mlq1O7gfTBC9IHpQymTIqoT+7i015VRBBEHyoD3R6qQxEUlRVERUofFnXrilu7dkzXlqVZ2pCkl2RJ05yb5x/aEl2u55LE8Pu9FNr0nOTT3//7vxwoIQgCgiqsSCAALMACLMACLMACAsACLMACLMACLCAALFWKKubFv1hdqa98S/2TmsaGowLHhtHM4gU5b0CoNb5MN9peJdajh7jNqJlnmL0/oMZkZDVWyz2WJif5Bd+InPvwfa5BjdHYxcXjc+SfCxP4e0+HF4q6BlHMeRbGIvr2nyVued/nE4nUh9K5Wn3bC16nlA9Ad7Re5e6uuNOBshWG4+2Wc8KS/3Sx9zG4uy9vTd8c2LvvQO8njOf6yWKxih6G6VC4RCiH1t35TdHd1FC/ydzx9hcChYuLxSkR6pSmw/ldUe93oOdkOhQuEepN3GnqZtbB9tfSofZqJTxYFBRJn2dCa7VSupG7s/wC7shCX69jiWczdqo4JFXFIjSUVW5Ias01H7EbmwY518AdSbocY1U9G+IPyPgDdkUu5g2cwF1avVjh6DGlroWzDs+i1YnltL8jd/g9UMGNJ6oSi9Ibjih9TYxfyqFYMiyS5ZpUua7V8ljVYQnRuAP2hrCRVqEs5tuAVegwJIioGtflwxtXqw6LiUR+UHyGtdRtEZH4l/8bLFP/owg1WyfwZprfv28o61YpsD4qbp4jinZrQ+1PuY5k6IHeUUFDrNcOP6PMH0cuFLsaRMll//CO/DDd33WemZp7I+O6qEY/hkLolBJvHB/ZiJvqF7OdNFDTf3/MJBKaFKrNhzBY5Nufy9dZRFsz2l72/3u4Tc29LoJ9lrETlvyntW2OeUWyym45l/EHj3e+RIhQ/A4UrmQwjIT7CaS1WSsvs3KBJZd8XdrWlruyuqrD+X3GQ0ARiry++EU61G5xvlVENTZUZsDnBPP6H5YCRtI0j6EyDr8cUClgRxNiA6EyYoU2kc7ZIhmMdDk+x9lTyK3w5MDVm89IgjIZEbLVpYZj2bDuT/yOqKfcksHwQwguFqcxGu40vBRI7yIMlMo4p/1dJrRWh2dUKVCm546i6MVL5Z0NccUujiPTCXHFMIkeCPv/gKFMs+TOQ4ORfPfZfbJULJR2ZAjFxsZLv87iYrH5bGByOkxSFQiVFKHE7i09FvnXvXHaVh+TA4YfepQbitTrOXYlOKl6ZjHNljPizfisYE22POD+T2WB5YHCZejtzNlR5KED72kWV2fVD/iZxQtEd9uHWTNs6kbuxWQiQUoF49qbevJBpSYez7WsUAZ3t4e9fOPtks2G3LVbZ/U9ByTv9qWAYShDjPPkg8pVutZ9oa3pm0dKklnplZi9fThbfhUKpg3FPih4H0obLyUDwRrJH1TMqTjFDSIZJWudtf2Q4Xi2/FL8PGxr2yzr992PvCUlpxTDwrNjrvyqlNIfPvij4JkdLft5ltz8UrtwTiWuzDxf8nWWWvmlVimRU6qcOpQyv0qZU6pgVVp+KZVTqp1nVUp+KZlTqmHt5pe2pXGtWnJKVawUGGKGyoXF97a/omROqY5F+td+K9sY/GP+K9W6FkEBFmABFmBVZVFqXVjX1/lr3mmeIpYKXhI4bV/rm63teZctV2ZUwyLgf9HAMAQswAIswAIsIAAswAIswAIswAICwAKsctc/AgwArHJUunK7Q6sAAAAASUVORK5CYII=',
    'filemime' => 'image/png',
    'filename' => 'protection.png',
    'filesize' => '1394',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/protection.png',
    'uuid' => '737ad63b-8354-5cb4-e9de-855faadae983',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2cbc351b-b3d1-6724-6d02-c1419d6594b1',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => '737ad63b-8354-5cb4-e9de-855faadae983',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'protection.png',
          'filesize' => '1394',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/protection.png',
          'uuid' => '737ad63b-8354-5cb4-e9de-855faadae983',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'P',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Protection',
    'path' => array(
      'alias' => 'clusters/protection',
      'pathauto' => FALSE,
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
    'uuid' => '2cbc351b-b3d1-6724-6d02-c1419d6594b1',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/ebb948de-eead-1074-d172-088e04b8d3c8',
      'cause' => 'taxonomy_term/d5195e8c-e724-af64-35a4-413a412e04f7',
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
    ),
    'field_tags' => array(),
    'file_contents' => 'iVBORw0KGgoAAAANSUhEUgAAAEsAAABLCAYAAAA4TnrqAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAATtSURBVHja7JxLbCJ1GMBnhoECA2WVVtkuSW0xpS+XbTeytZq1h9U9eNBejMc9aGJWk02MGj24Hu11Y9ZH3INXTTysvdk9bBqtjdiypF2BLtCHdNtY2JXwGBhgxvmqGDpL6QxQSuH7kgkw83/M/Phe/+8fIAVBIFDkCYUIEBbCQlgIC2EhLESAsBAWwkJYzSm0ksY/mW2PnBOMOrPumf4peJ/ZCH8phHcWFd2Ao+8yzTAjfC67lbnjmyK5XEpOv+J5ueiDad6//qPSh385GlTUnlSykJbCggfN3w1eF3L5fwejVQQzPvprMrT2rpzxdEz7bTa4Ziz0p40Gnu8yTwrJVLhcP3XXk69lF72fSOdNzLrGGxIWfLMUy0UKN3zUAsBUQ7Z3cp6VLw4LVsU+izIZuhsF1O6XJ94LmDM6+OPo4IuF/+uhTy36mFw8QUnNQalGVNK/VD8IMA2pWRC1wBmDU5b6DfFBSDkHOOXiMfV2W5ynSObAvicMNum8uvHRaaWRuG6atatdYrjOa2ij2tF3iWrTWDLe4DXBsxKV2/+/qLnw/3jm9u9Iv4zUIRILZSXzpmZd0YY1w2INK0Qgsp7R7wjmrSrPki0dpl46k7+XZ1mqnO8p5a9UOh2fJfJPkHG25ppTt9RBiWj7ej+GQABgpIcUnPSAfoVMHdeGuJBGWEeXDNL00PFLSkVHzVitvyidJBv401zNTabd3nPMmaEtRZFLq4lxfPZ7JZWMmkbDGcfYqJj4LRwn04EI2+Y8fYP9femKFFpDRsOjXmCn59xvMj3d24KG1qODlyEpf9BoGLQHEZZcYMs+CxQsEZZMk9Sk81MIS6ZAGRthKYmQ1s5RhCXTFFGzcLnTYMsuJY2h7k5ZO89WOpkqxrqkNXs52Xep2rrK/NgYEbr/uZLx6goLlgvV1Ll5e/ckGWRvyvUb+uH+7eSc+61S13LifYg5E0F4Vq43pRlCzR42KeTs4MDmReIPf9nSbNYb+rapfRZssYNp7QcMzuvPPzudXF23HFQtUA/0XqrUHVSyTqxPDb5UCDfqzG0DtisaSv26kOZMZLt+lUuzt2CnRm69Hco2yTt3LRXmWmdf8swvHprPqmliKALhflu+yhHE1T3nlYwhAhZfFMMC7eVjifVDdfCNJvF594U25/BHFK0+qaQfRFcyvKN8twjMsBmPW6+8+nytxySb4YdOUl8qmJgTVCrzkOi2DAqBsLf4mtLqaNNn8EbnmRtCNkcwj3fO4HKnnFvRqrVp1/IkvE+6l06BliGsfUTrPP1e7u/Y7nOBdrU7R24irP3kXvjT4o+sa+kF0DaEJc2fnrYOcJGoZs8aUtQyjcP+BsKSiKHnqa/A9B55yI2drxGWxLEnbs+fL3UNtA20DmEVOfZSWlVw9KB1CKuwbnuQ+LDc9Vo4+uaA1dVxKuUPmso1qYWjbwpYhiH7tf1McI+papkPWh6WsBW5IKddYm5hsOVhHWSCxTLz3IS9pWHp7baY3Lb8xvZ6S8OiTnZ65LTTdJi5i5u+dEvDSqyuvU2qDy76UgM936CDD4S9homx2XLAmGF7LDW38D7mWaLEZ35+kZk494MUGHw2OEc2E4GQhUxn09XM0XRlZSj2aR39lyla3bWbufsCnxH3I5uF69WUlUn8s7EWNEOEhbAQFsJCQVgIC2EhrOMr/wgwAFcaS4gfpZErAAAAAElFTkSuQmCC',
    'filemime' => 'image/png',
    'filename' => 'wash.png',
    'filesize' => '1371',
    'media_description' => array(),
    'media_title' => array(),
    'rdf_mapping' => array(),
    'status' => '1',
    'type' => 'image',
    'uid' => '1',
    'uri' => 'public://clusters/images/wash.png',
    'uuid' => 'ebb948de-eead-1074-d172-088e04b8d3c8',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d5195e8c-e724-af64-35a4-413a412e04f7',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_cluster_co_partners' => array(),
    'field_cluster_coordination_name' => array(),
    'field_cluster_coordinator_email' => array(),
    'field_cluster_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'fid' => 'ebb948de-eead-1074-d172-088e04b8d3c8',
          'field_license' => array(
            'und' => array(
              0 => array(
                'value' => 'nothing',
              ),
            ),
          ),
          'field_tags' => array(),
          'filemime' => 'image/png',
          'filename' => 'wash.png',
          'filesize' => '1371',
          'height' => '75',
          'media_description' => array(),
          'media_title' => array(),
          'rdf_mapping' => array(),
          'status' => '1',
          'title' => '',
          'type' => 'image',
          'uid' => '1',
          'uri' => 'public://clusters/images/wash.png',
          'uuid' => 'ebb948de-eead-1074-d172-088e04b8d3c8',
          'width' => '75',
        ),
      ),
    ),
    'field_cluster_lead_agencies' => array(),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'W',
        ),
      ),
    ),
    'field_cluster_strategy_activites' => array(),
    'field_cluster_website' => array(),
    'format' => 'plain_text',
    'name' => 'Water Sanitation Hygiene',
    'path' => array(
      'alias' => 'clusters/water-sanitation-hygiene',
      'pathauto' => FALSE,
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
    'uuid' => 'd5195e8c-e724-af64-35a4-413a412e04f7',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );

  return $entities;
}
