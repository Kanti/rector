<?php

namespace Rector\SOLID\Tests\Rector\ClassMethod\ChangeReadOnlyVariableWithDefaultValueToConstantRector\Fixture;

use Rector\Renaming\Rector\Class_\RenameClassRector;
use Symfony\Component\Yaml\Yaml;

class SkipArrayVariable
{
    private function createRectorYamlContent(): string
    {
        $oldToNewClasses = $this->renamedClassesCollector->getOldToNewClassesSortedByHighestParentsAsString();

        $data = [
            # rector.yaml
            'services' => [
                RenameClassRector::class => [
                    '$oldToNewClasses' => $oldToNewClasses,
                ],
            ],
        ];

        return Yaml::dump($data, 10);
    }
}
